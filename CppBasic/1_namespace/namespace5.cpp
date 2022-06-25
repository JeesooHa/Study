#include <filesystem>  // c++17

namespace fs = std::filesystem;  // 별명 생성

int main(){

    std::filesystem::create_directory("C:/Test");

    if(!std::filesystem::exists("C:/Test/calc.exe")){
        std::filesystem::copy_file("C:/Windows/system32/calc.exe", "C:/Test/calc.exe");
    }

//    namespace fs = std::filesystem;  // 별명 생성

    if(!fs::exists("C:/Test/calc.exe")){
        fs::copy_file("C:/Windows/system32/calc.exe", "C:/Test/calc.exe");
    }
}