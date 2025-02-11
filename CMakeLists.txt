cmake_minimum_required(VERSION 3.16)

project(Tableur_Chenil VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(WINDOWS_ICON_RESOURCE "appicon.rc")

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Charts)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Charts)
find_package(Qt6 REQUIRED COMPONENTS Sql)

set(PROJECT_SOURCES
        main.cpp
        tableurchenil.cpp
        tableurchenil.h
        tableurchenil.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Tableur_Chenil
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        ${WINDOWS_ICON_RESOURCE}
        observer.h
        observable.h
        data.h data.cpp
        client.h client.cpp
        controller.h controller.cpp
        viewreservation.h viewreservation.cpp
        viewclientlist.h viewclientlist.cpp
        viewclientmodify.h viewclientmodify.cpp

        viewhistogrammechien.h viewhistogrammechien.cpp
        viewhistogrammechat.h viewhistogrammechat.cpp
        viewdayinformation.h viewdayinformation.cpp
        viewdaypiechart.h viewdaypiechart.cpp
        dbmanager.h dbmanager.cpp
        viewblacklist.h viewblacklist.cpp
        blackclient.h blackclient.cpp
        appicon.rc



    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Tableur_Chenil APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Tableur_Chenil SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Tableur_Chenil
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Tableur_Chenil PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(Tableur_Chenil PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Charts)
target_link_libraries(Tableur_Chenil PRIVATE Qt6::Sql)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Tableur_Chenil)
endif()
set_target_properties(Tableur_Chenil PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Tableur_Chenil
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Tableur_Chenil)
endif()
