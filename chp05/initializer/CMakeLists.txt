FILE(GLOB SRC_LIST "*.cpp")
FILE(GLOB HEADERS "*.h")

ADD_EXECUTABLE(example ${SRC_LIST} ${HEADERS})
target_include_directories(initializer PRIVATE ..)
TARGET_LINK_LIBRARIES(example consensus cryption network)