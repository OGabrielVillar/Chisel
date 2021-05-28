#include <Chisel.h>}

class Sandbox : public Chisel::Application
{

public:
	Sandbox()
	{}
	~Sandbox()
	{}

};

Chisel::Application* Chisel::CreateApplication()
{
	return new Sandbox;
}