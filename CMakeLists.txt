project(ITKImagePrintout)

cmake_minimum_required(VERSION 3.0)

find_package(ITK REQUIRED)

include(${ITK_USE_FILE})

add_executable(ITKImagePrintout
  main.cxx
  )

target_link_libraries(ITKImagePrintout
  ${ITK_LIBRARIES}
  )


