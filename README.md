https://go.microsoft.com/fwlink/?linkid=830387


自定义launch
g++ -g .\main.cpp .\swap.cpp -o mytest2
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "ctest",
            "type":"cppdbg",
            "request": "launch",
            "program": "${workspaceRoot}/mytest2.exe",
            "cwd":"${workspaceRoot}"
        }
    ]
}


快捷键Ctrl+Shift+P打开控制面板。输入CMake：quick start，选着GCC编译器，然后创建一个可执行文件。
cd .\build\
cmake ..
mingw32-make
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "ctest",
            "type":"cppdbg",
            "request": "launch",
            "program": "${workspaceRoot}/build/myproject.exe",
            "cwd":"${workspaceRoot}"
        }
    ]
}


mkdir build
cd .\build\
不使用MSVC编译器
cmake -G "MinGW Makefiles" ..

自动编译
快捷键Ctrl+Shift+P打开控制面板。输入Tasks:Configure Task
tasks.json:
{
	"version": "2.0.0",
	"options": {
		"cwd": "${workspaceRoot}/build"
	},
	"tasks": [
		{
			"label": "cmake",
			"type": "shell",
			"command": "cmake",
			"args": [
				".."
			]
		},
		{
			"label": "make",
			"group": {
				"kind": "build",
				"isDefault": true
			},
			"command": "mingw32-make",
			"args": []
		},
		{
			"label": "Build",
			"dependsOn":[
				"cmake",
				"make"
			]
		}
	]
}
launch.json:
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "ctest",
            "type":"cppdbg",
            "request": "launch",
            "program": "${workspaceRoot}/build/myproject.exe",
            "cwd":"${workspaceRoot}",
            "args": [],
            "preLaunchTask": "Build",
        }
    ]
}