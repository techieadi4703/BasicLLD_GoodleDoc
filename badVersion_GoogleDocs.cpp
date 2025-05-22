#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<fstream>


class DocumentEditor{
    private:
    vector<string> elements;
    string renderedDocument;
public:
    void addText(string text){
        elements.push_back(text);
    }
    void addImage(string image){
        elements.push_back(image);
    }

    string renderDocument(){
        renderedDocument.clear();
        if(renderedDocument.empty()){
            string result;
            for(auto element : elements){
                if(element.size()>4 && (element.substr(element.size()-4) == ".jpg"||element.substr(element.size()-5) == ".png")){
                    result +=  element + "\n";
                } else {
                    result +=  element + "\n";
                }
            }
            renderedDocument = result;
        }
        return renderedDocument;
    }

    void saveToFile(){
        ofstream file("badVersion.txt");
        if(file.is_open()){
            file << renderDocument();
            file.close();
            cout << "Document saved to badVersion.txt" << endl;
        } else {
            cout << "Unable to open file" << endl;
        }
    }
};

int main(){
    DocumentEditor editor;
    editor.addText("hello, Aditya");
    editor.addImage("image.jpg");
    editor.addText("This is a sample text.");

    cout <<editor.renderDocument() << endl;
    editor.saveToFile();   
    cout << "Document rendered and saved." << endl;
    
    return 0;
}

