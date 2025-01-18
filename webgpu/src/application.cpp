#include <GLFW/glfw3.h>

#include "application.h"

bool Application::Initialize() {
  return true;
}

void Application::Terminate() {
}

void Application::MainLoop() {
  glfwPollEvents();
}

bool Application::IsRunning(GLFWwindow* window) {
  return !glfwWindowShouldClose(window);
}
