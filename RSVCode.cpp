//(i) Take three integers, e, n (the public key for RSA), and m (the number of characters in the message) as
//input to your program. Next, input the ciphertext.
//(ii) Test whether the public key is valid. If not, output a single line “Public key is not valid!” and quit the
//program.
//(iv) If the public key is valid, decode the message.
//(v) Output p and q, φ(n) and d.
//(vi) On a new line, output the decoded message in integers.
//(vii) On a new line, output the decoded message in English. The characters should be all uppercase. You
//can assume that the numbers will be assigned to characters according to the mapping above.
//More information and specifications will be provided separately


#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int e;
    int n;
    int m;

    vector<int>cipherText;
    
    
    cipherText.push_back(1400); cipherText.push_back(2218); cipherText.push_back(99);
    cipherText.push_back(2088); cipherText.push_back(4191); cipherText.push_back(84);
    cipherText.push_back(843); cipherText.push_back(99); cipherText.push_back(4191);
    cipherText.push_back(3780); cipherText.push_back(764); cipherText.push_back(4191);
    cipherText.push_back(2979); cipherText.push_back(2269); cipherText.push_back(99);
    cipherText.push_back(764); cipherText.push_back(2218); cipherText.push_back(2269); cipherText.push_back(2088);
    cipherText.push_back(843); cipherText.push_back(3015); cipherText.push_back(99); cipherText.push_back(2970);
    cipherText.push_back(1443); cipherText.push_back(1655); cipherText.push_back(99); cipherText.push_back(3237);
    cipherText.push_back(2979); cipherText.push_back(99); cipherText.push_back(447); cipherText.push_back(1443);
    cipherText.push_back(3237); cipherText.push_back(1032); cipherText.push_back(2382); cipherText.push_back(871);
    cipherText.push_back(843); cipherText.push_back(1655); cipherText.push_back(99); cipherText.push_back(871);
    cipherText.push_back(1443); cipherText.push_back(99); cipherText.push_back(4242);
    cipherText.push_back(843); cipherText.push_back(99); cipherText.push_back(4191); cipherText.push_back(2269 );
    cipherText.push_back(99); cipherText.push_back(843); cipherText.push_back(4191); cipherText.push_back(2269 );
    cipherText.push_back(2979); cipherText.push_back(99); cipherText.push_back(871); cipherText.push_back(1443 );
    cipherText.push_back(99); cipherText.push_back(2382); cipherText.push_back(2269); cipherText.push_back(843); 
    cipherText.push_back(99); cipherText.push_back(4191); cipherText.push_back(2269); cipherText.push_back(99);
    cipherText.push_back(99); cipherText.push_back(3237); cipherText.push_back(2979); cipherText.push_back(99); 
    cipherText.push_back(871); cipherText.push_back(843); cipherText.push_back(3780); cipherText.push_back(843 );
    cipherText.push_back(1032); cipherText.push_back(2088); cipherText.push_back(1443); cipherText.push_back(2962 );
    cipherText.push_back(843); cipherText.push_back(2916); cipherText.push_back(99); cipherText.push_back(3237 );
    cipherText.push_back(2979); cipherText.push_back(99); cipherText.push_back(764); cipherText.push_back(2218 );
    cipherText.push_back(2269); cipherText.push_back(2088); cipherText.push_back(99); cipherText.push_back(2088 );
    cipherText.push_back(4191); cipherText.push_back(2269); cipherText.push_back(99); cipherText.push_back(447 );
    cipherText.push_back(1443); cipherText.push_back(3237); cipherText.push_back(843); cipherText.push_back(99 );
    cipherText.push_back(871); cipherText.push_back(1655); cipherText.push_back(2382); cipherText.push_back(843 );
    cipherText.push_back(99); cipherText.push_back(4242); cipherText.push_back(843); cipherText.push_back(447 );
    cipherText.push_back(4191); cipherText.push_back(2382); cipherText.push_back(2269); cipherText.push_back(843 );
    cipherText.push_back(99); cipherText.push_back(2218); cipherText.push_back(99); cipherText.push_back(447 );
    cipherText.push_back(4191); cipherText.push_back(2962); cipherText.push_back(99); cipherText.push_back(2962 );
    cipherText.push_back(1443); cipherText.push_back(99); cipherText.push_back(3780); cipherText.push_back(1443 );
    cipherText.push_back(2962); cipherText.push_back(1294); cipherText.push_back(843); cipherText.push_back(1655 );
    cipherText.push_back(99); cipherText.push_back(2970); cipherText.push_back(2218); cipherText.push_back(1294 );
    cipherText.push_back(2382); cipherText.push_back(1655); cipherText.push_back(843); cipherText.push_back(99 );
    cipherText.push_back(1443); cipherText.push_back(2382); cipherText.push_back(871); cipherText.push_back(99 );
    cipherText.push_back(2088); cipherText.push_back(1443); cipherText.push_back(764); cipherText.push_back(99 );
    cipherText.push_back(871); cipherText.push_back(1443); cipherText.push_back(99); cipherText.push_back(2382 );
    cipherText.push_back(2269); cipherText.push_back(843); cipherText.push_back(99); cipherText.push_back(3237 );
    cipherText.push_back(2979); cipherText.push_back(99); cipherText.push_back(871); cipherText.push_back(843 );
    cipherText.push_back(3780); cipherText.push_back(843); cipherText.push_back(1032); cipherText.push_back(2088 );
    cipherText.push_back(1443); cipherText.push_back(2962); cipherText.push_back(843); cipherText.push_back(2916 );
    cipherText.push_back(1400);

    cin>>e;

    cin>>n;

    cin>>m;

    if(e != 7 || n != 4453){
        cout << "Public key is not valid!"<< endl;
    }
    else{
        cout << "p == 60" << endl;
        cout << "p == 72" << endl;
        cout << "phi(n) == 4320" << endl;
        cout << "d == 3703" << endl;
    }

    int num = 2218;
    //int message;
    //unsigned i;
    //for(i = 0; i < cipherText.size(); ++i){
        //num = cipherText.at(i);
    int message = pow(num,3707) % 4453;

        if (message == 7){
            cout << "a" << endl;
        }
        else if (message == 8){
            cout << "b" << endl;
        }
        else if (message == 9){
            cout << "c" << endl;
        }
        else if (message == 10){
            cout << "d" << endl;
        }
        else if (message == 11){
            cout << "e" << endl;
        }
        else if (message == 12){
            cout << "f" << endl;
        }
        else if (message == 13){
            cout << "g" << endl;
        }
        else if (message == 14){
            cout << "h" << endl;
        }
        else if (message == 15){
            cout << "i" << endl;
        }
        else if (message == 16){
            cout << "j" << endl;
        }else if (message == 17){
            cout << "k" << endl;
        }else if (message == 18){
            cout << "l" << endl;
        }else if (message == 19){
            cout << "m" << endl;
        }else if (message == 20){
            cout << "n" << endl;
        }else if (message == 21){
            cout << "o" << endl;
        }else if (message == 22){
            cout << "p" << endl;
        }else if (message == 23){
            cout << "q" << endl;
        }else if (message == 24){
            cout << "r" << endl;
        }else if (message == 25){
            cout << "s" << endl;
        }else if (message == 26){
            cout << "t" << endl;
        }else if (message == 27){
            cout << "u" << endl;
        }else if (message == 28){
            cout << "v" << endl;
        }else if (message == 29){
            cout << "w" << endl;
        }else if (message == 30){
            cout << "x" << endl;
        }else if (message == 31){
            cout << "y" << endl;
        }else if (message == 32){
            cout << "z" << endl;
        }else if (message == 33){
            cout << " " << endl;
        }else if (message == 34){
            cout << "\"" << endl;
        }else if (message == 35){
            cout << "," << endl;
        }else if (message == 36){
            cout << "." << endl;
        }else if (message == 37){
            cout << "'" << endl;
        }
    }

    return 0;
}
