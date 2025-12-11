#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;
class FileReader {
private:
    string filename;
public:
    FileReader(string fname) {
        filename = fname;
    }
    void readFile() {
        ifstream file(filename);
        try {
            if (!file)
                throw runtime_error("File not found!");
            string line;
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        }
        catch (runtime_error &e) {
            cerr << "Exception: " << e.what() << endl;
        }
    }
};
int main() {
    FileReader reader("data.txt");
    reader.readFile();

    return 0;
}
