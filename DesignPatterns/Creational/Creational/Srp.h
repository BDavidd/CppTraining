#ifndef SRP_H
#define SRP_H

#include <string>
#include <vector>
#include <fstream>

class Journal
{
public:
	explicit Journal(const std::string& title)
		: title{title}
	{
	}

	const std::vector<std::string>& getEntries() const
	{
		return entries;
	}

	void add(const std::string& entry)
	{
		entries.push_back(entry);
	}

	// Doesn't respect single responsibility principle!
	//void save(const std::string& filename)
	//{
	//	std::ofstream ofs(filename);
	//	for (auto& s : entries)
	//	{
	//		ofs << s << std::endl;
	//	}
	//}

private:
	std::string title;
	std::vector<std::string> entries;
};

class PersistenceManager
{
public:
	static void save(const Journal& j, const std::string& filename)
	{
		std::ofstream ofs(filename);
		for (auto& s : j.getEntries())
		{
			ofs << s << std::endl;
		}
	}
};

#endif
