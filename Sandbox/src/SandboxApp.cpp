#include "Neo/Application.h"

class Sandbox : public Neo::Application
{
public:
	Sandbox() {

	}

	~Sandbox() {

	}

};

int main()
{
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
	return 0;
}
