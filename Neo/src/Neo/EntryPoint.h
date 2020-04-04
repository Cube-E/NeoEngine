#pragma once

#ifdef NEO_PLATFORM_WINDOWS

//CreateApplication() is defined in the client and passed into here to run.
extern Neo::Application* Neo::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Neo::CreateApplication();
	app->Run();
	delete app;
} 

#endif