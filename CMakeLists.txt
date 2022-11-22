cmake_minimum_required (VERSION 3.11)
 
# --- Fetch FTXUI --------------------------------------------------------------
include(FetchContent)
 
set(FETCHCONTENT_UPDATES_DISCONNECTED TRUE)
FetchContent_Declare(ftxui
  GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
  # Important: Specify a GIT_TAG XXXXX here.
)
 
FetchContent_GetProperties(ftxui)
if(NOT ftxui_POPULATED)
  FetchContent_Populate(ftxui)
  add_subdirectory(${ftxui_SOURCE_DIR} ${ftxui_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()
 
# ------------------------------------------------------------------------------
 
project(zoohra
  LANGUAGES CXX
  VERSION 1.0.0
)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(zoohra src/main.cpp src/Scene/Scene.cpp src/Player/Player.cpp
src/EventHandler/EventHandler.h src/EventHandler/EventHandlerComposite.cpp
src/EventHandler/Events/E_PlayerMoveRight.cpp src/Mediator/Mediator.cpp
src/EventHandler/Events/E_PlayerMoveLeft.cpp
src/EventHandler/Events/E_PlayerMoveUp.cpp src/EventHandler/Events/E_PlayerMoveDown.cpp
src/EventHandler/Events/E_PlayerMove.h)
target_include_directories(zoohra PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
 
target_link_libraries(zoohra
  PRIVATE ftxui::screen
  PRIVATE ftxui::dom
  PRIVATE ftxui::component
)
