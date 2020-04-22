#
include < iostream > #include < fstream > #include < string >
    using namespace std;
int main() {
    ifstream wejscie;
    ofstream wyjscie;
    wejscie.open("wej.txt");
    wyjscie.open("wyj.json");
    int a = 1;
    string line;
    if (wejscie.good()) {
        wyjscie << "[  \n  ";
        while (!wejscie.eof()) {
            getline(wejscie, line);
            wyjscie << "\n { \n "
            marka " : "
            " << line<<"
            "";
            getline(wejscie, line);
            wyjscie << "  \n"
            typ " : "
            " << line<<"
            "";
            getline(wejscie, line);
            wyjscie << "  \n"
            id " : "
            " << line << "
            "\n},";
        }
        wyjscie << "\n]";
    }
    wejscie.close();
    wyjscie.close();
    system("PAUSE");

    return 0;
    
}