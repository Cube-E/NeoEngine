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
	
