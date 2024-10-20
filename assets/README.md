# AI-Assisted Recipe Planner

An AI-powered desktop application that helps users plan meals by suggesting recipes based on available ingredients and dietary preferences. The project is built using C++, Qt for the GUI, and integrates with OpenAI's ChatGPT for intelligent recipe suggestions.

## Features
- **Interactive GUI**: Simple and intuitive interface for entering ingredients and getting recipe suggestions.
- **AI Integration**: Uses OpenAI's ChatGPT to analyze user input and provide personalized recipe recommendations.
- **Expandable**: Planned features include meal planning, shopping list generation, and more.

## Getting Started

These instructions will help you set up and run the project on your local machine.

### Prerequisites

1. **C++ Compiler**: Ensure you have a C++ compiler installed (MinGW recommended for Windows).
2. **Git**: Install Git to clone the repository and manage version control.
   ```bash
   choco install git
3. **CMake**: Install CMake to configure and build the project.
    ```bash
   choco install cmake
4. **Qt**: Install Qt (v6.4.2) using Chocolatey.
    ```bash
   choco install qt6-base-dev
5. **libcurl**: Install libcurl for making HTTP requests.   
    ```bash
   choco install curl

### Installation
1. **Clone the Repository**: 
    ```bash
    git clone https://github.com/yourusername/recipe-planner.git
    cd recipe-planner

2. **Set Up Environment Variables**: 
    Ensure that C:\Qt\6.4.2\mingw_64\bin is added to your system PATH.

3. **Configure and Build the Project**: 
    Create a build directory and navigate into it: 
        ```bash
        mkdir build
        cd build

    Run CMake to configure the project:
    ```bash
    cmake .. -G "MinGW Makefiles" -DCMAKE_PREFIX_PATH="C:/Qt/6.4.2/mingw_64/lib/cmake"

    Build the project: 
    ```bash
    cmake --build .

4. **Run the Application**: 
    ```bash
    ./RecipePlanner


### Using the Application
1. **Launch the Application**:
    You will see a window with a button to enter ingredients and request recipe suggestions.
1. **Get Recipe Suggestions**:
    Enter the ingredients you have and click the "Get Recipe Suggestions" button.
    The application will use ChatGPT to provide a list of possible recipes based on the ingredients entered.