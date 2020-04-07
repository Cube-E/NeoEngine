# firstGameEngine
My first game engine

Learning notes

Properties
	Removed x86 platforms
	Configuration Properties
		-> General
			Modified Output and Intermediate Directories.
			Modified Configuration Type to be a .dll because other applications will be using the engine.
		-> C/C++ -> Preprocessor
			Added to Preprocessor Definitions to work with macros added through Core.h in order to __declspec dllexport/import based on engine/applications.
Application specific functions (like Run) are implemented in game engine Application.cpp and inherited though the client.
Global header file for all includes that the application will use: Neo.h
Entry point lies inside the engine.
	The client implements CreateApplication function defined in game engine(Application.h).
		The implementation should return and object itself.
	When engine runs with client, in EntryPoint, the extern gets/calls the implemented CreateApplication in client which gets the client object. It then runs the app while true.
	
Logging
	Using spdlog.
	git submodule into the project to not have to maintain the code yourself.
	Configuation Properties -> C/C++ -> General
		Add include directory from spdlog into Additional Include Directories.
	Shared_ptrs help cleanup when you're not using the memory anymore.
	Can't declare static in header file because of multiple definitions when #include. (Is there a way in c++11?)
		c++17 allows with keyword inline to fix static declaration in header(NEED TO FIND OUT WHY).
	A non-static member variable or function has to be used in reference to an object. Static does not.