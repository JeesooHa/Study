class InputFile
{
public:
    void read() {}
    void open() {}
};

class OutputFile
{
public:
    void write() {}
    void open() {}
};

class IOFile : public InputFile, public OutputFile
{

};

int main()
{
    IOFile file;
    file.InpuFile::open();
}