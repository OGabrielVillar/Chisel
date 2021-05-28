#pragma once
#ifdef CH_PLATFORM_WINDOWS

extern Chisel::Application* Chisel::CreateApplication();

int main(int argc, char** argv)
{
	printf("Welcome to Chisel !");
	auto app = Chisel::CreateApplication();
	app->Run();
	delete app;
}

#endif
