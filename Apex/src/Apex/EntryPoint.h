#pragma once

#ifdef AX_PLATFORM_WINDOWS

extern Apex::Application* Apex::CreateApplication();

int main(int argc, char** argv) {
	
	Apex::Log::init();
	int a = 5;
	AX_CORE_WARN("Warning Core Var={0}", a);
	AX_INFO("Info Client Var={0}", a);

	auto app = Apex::CreateApplication();
	app->Run();
	delete app;
}

#endif