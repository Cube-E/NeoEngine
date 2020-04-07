#pragma once

#ifdef NEO_PLATFORM_WINDOWS

//CreateApplication() is defined in the client and passed into here to run.
//extern Neo::Application* Neo::CreateApplication();

int main(int argc, char** argv)
{
	Neo::Log::Init();
	NEO_CORE_WARN("Initialized Core Log!");
	NEO_CLIENT_WARN("Initialized Client Log!");
	auto app = Neo::CreateApplication();
	app->Run();
	delete app;
} 

#endif