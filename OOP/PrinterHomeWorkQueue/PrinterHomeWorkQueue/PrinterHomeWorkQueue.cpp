#include <iostream>
#include  "Queue.h"


class Client;
class Printer;
class Manager;

class Client
{
public:
	Client() = default;

	explicit Client(const size_t id)
	{
		this->id_ = id;
		this->page_count_ = 0;
	}

	size_t get_id() const
	{
		return this->id_;
	}

private:
	size_t id_{};
	size_t page_count_{};
};

class Printer
{
public:
	Printer(const std::string& make, const std::string& model)
	{
		this->make_ = make;
		this->model_ = model;
	}

	std::string make() const
	{
		return make_;
	}
	std::string model() const
	{
		return model_;
	}

	void set_make(const std::string& make)
	{
		make_ = make;
	}
	void set_model(const std::string& model)
	{
		model_ = model;
	}

	void print(Client client, const Printer* printer) const
	{
		std::cout
			<< printer->make() << '\t'
			<< printer->model() << '\t'
			<< "Printed document for: " << '\n'
			<< client.get_id() << '\n';
	}

private:
	std::string make_{};
	std::string model_{};
};


class Manager
{
public:
	void add_printer(Printer& printer)
	{
		this->printer_ = &printer;
	}

	void add_client(const Client* client)
	{
		auto* tmp = new Client[this->client_size_]{};

		for (size_t i = 0; i < this->client_size_; ++i)
		{
			tmp[i] = this->clients_[i];
		}

		this->client_size_++;

		clients_ = new Client[this->client_size_]{};

		for (size_t i = 0; i < this->client_size_ - 1; ++i)
		{
			this->clients_[i] = tmp[i];
		}

		this->clients_[this->client_size_ - 1] = *client;
	}

	void show_clients() const
	{
		for (size_t i = 0; i < this->client_size_; ++i)
		{
			std::cout
				<< "Client id: " << this->clients_[i].get_id() << std::endl;
		}
	}

	void set_printer(Printer* printer)
	{
		this->printer_ = printer;
	}

	void show_printer() const
	{
		std::cout
			<< "Make: " << this->printer_->make() << '\n'
			<< "Model: " << this->printer_->model() << '\n';
	}

	void add_to_queue(const Client client)
	{
		call_queue->push(client);
	}

	void print()
	{
		printer_->print(call_queue->pop(), this->printer_);
	}

private:
	Printer* printer_{};
	Client* clients_{};
	size_t client_size_{};
	queue<Client> *call_queue = new queue<Client>();
};


int main()
{
	auto* hp = new Printer("Hewlett-Packard", "MFP-1020");
	
	auto* c1 = new Client(1);
	auto* c2 = new Client(2);
	auto* c3 = new Client(3);
	
	auto* localhost = new Manager();
	
	localhost->add_client(c1);
	localhost->add_client(c2);
	localhost->add_client(c3);
	localhost->set_printer(hp);
	
	localhost->add_to_queue(*c1);
	localhost->add_to_queue(*c2);
	localhost->add_to_queue(*c3);
	
	localhost->print();
	localhost->print();
	localhost->print();

	

	return 0;
}
