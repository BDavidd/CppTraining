#ifndef ISP_H
#define ISP_H
#include <vector>

struct Document;

//struct IMachine
//{
//	virtual void print(std::vector<Document*> docs) = 0;
//	virtual void scan(std::vector<Document*> docs) = 0;
//	virtual void fax(std::vector<Document*> docs) = 0;
//};
//
//struct MFP : IMachine
//{
//	void print(std::vector<Document*> docs) override;
//	void scan(std::vector<Document*> docs) override;
//	void fax(std::vector<Document*> docs) override;
//};

struct IPrinter
{
	virtual void print(std::vector<Document*> docs) = 0;
};

struct IScanner
{
	virtual void scan(std::vector<Document*> docs) = 0;
};

struct IFax
{
	virtual void fax(std::vector<Document*> docs) = 0;
};

struct Printer : IPrinter
{
	void print(std::vector<Document*> docs) override;
};

struct Scanner : IScanner
{
	void scan(std::vector<Document*> docs) override;
};

struct Fax : IFax
{
	void fax(std::vector<Document*> docs) override;
};

struct IMachine : IPrinter, IScanner, IFax
{
	
};

struct Machine : IMachine
{
	IPrinter& printer;
	IScanner& scanner;
	IFax& faxMachine;

	Machine(IPrinter& printer, IScanner& scanner, IFax& fax)
		: printer{printer}
		, scanner{scanner}
		, faxMachine {fax}
	{
	}

	void print(std::vector<Document*> docs) override
	{
		printer.print(docs);
	}

	void scan(std::vector<Document*> docs) override
	{
		scanner.scan(docs);
	}

	void fax(std::vector<Document*> docs) override
	{
		faxMachine.fax(docs);
	}
};
#endif
