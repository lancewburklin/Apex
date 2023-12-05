#pragma once

#ifdef AX_PLATFORM_WINDOWS

extern Apex::Application* Apex::CreateApplication();

int main(int argc, char** argv) {
	printf("Mah engine boi\n");
	auto app = Apex::CreateApplication();
	app->Run();
	delete app;
}

#endif