INCLUDE(${PROJECT_SOURCE_DIR}/FindUSB.cmake)

IF(NOT USB_FOUND)
	message(FATAL_ERROR "libusb is required for dfu-util!")
ENDIF(NOT USB_FOUND)

include_directories(${USB_INCLUDE_DIR})
link_directories(${USB_LIBRARIES})

add_executable(dfu-util dfu.c sam7dfu.c main.c)

link_directories(${PROJECT_BINARY_DIR}/common ${PROJECT_BINARY_DIR}/hfs ${PROJECT_BINARY_DIR}/ipsw-patch)

target_link_libraries(dfu-util xpwn)
target_link_libraries(dfu-util ${USB_LIBRARIES})

install(TARGETS dfu-util DESTINATION .)
