#ifndef BOOSTDID_H
#define BOOSTDID_H

#include "di.hpp"

#include <iostream>
#include <memory>
#include <utility>


struct ILogger
{
	virtual ~ILogger() = default;

	virtual void log(const std::string& s) = 0;
};

struct ConsoleLogger : ILogger
{
	void log(const std::string& s) override
	{
		std::cout << "LOG: " << s << std::endl;
	}
};

struct Engine
{
	static constexpr float volume = 5;
	static constexpr int horsePower = 400;

	friend std::ostream& operator<<(std::ostream& os, const Engine& obj)
	{
		return os << "volume: " << obj.volume << " horsePower: " << obj.horsePower;
	}
};

struct Car
{
	std::shared_ptr<Engine> engine;
	std::shared_ptr<ILogger> logger;

	explicit Car(const std::shared_ptr<Engine>& engine, const std::shared_ptr<ILogger> logger)
		: engine{engine}
		, logger{logger}
	{
		logger->log("Created a car");
	}

	friend std::ostream& operator<<(std::ostream& os, const Car& obj)
	{
		return os << "Car with engine: " << *obj.engine;
	}
};

void dinMain()
{
	//auto e = std::make_shared<Engine>();
	//auto c = std::make_shared<Car>(e);

	using namespace boost;
	auto injector = di::make_injector(
		di::bind<ILogger>().to<ConsoleLogger>()
	);

	auto c = injector.create<std::shared_ptr<Car>>();

	std::cout << *c << std::endl;
}

#endif
