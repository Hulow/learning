add_library(application ./BitwiseOperators/MaskColorUseCase.cpp)
target_include_directories(application PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(application PUBLIC domain)