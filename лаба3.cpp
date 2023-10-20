#include <iostream>;
#include <cstring>;
using namespace std;

//nomer 1
//int main() {
//	float N[9];
//	float a; cin >> a;
//	cout << "Massive before:"<<endl;
//	for (int i=0; i < 9; i++) {
//		N[i] = rand() % 15;
//		cout << N[i]<<endl;
//	}
//	float r = N[0];
//	cout << "Massive after:"<<endl;
//	for (int i = 0; i < 9; i++) {
//		//N[i] *= 2;
//		//N[i]/=a;
//		N[i]/=r;
//		cout << N[i] << endl;
//	}
//	return 0;
//}



//nomer 2
//int main() {
//	cout << "Vvedite kolichestvo elementov massiva: "<<endl;
//	int y = 9;
//	float n[9];
//	float k1; float k2;
//	cout << "Vvedite k1 i k2: " << endl;
//	cin >> k1; cin >> k2;
//	float a=0; float b=0; float c=0; float d=0; float e=0; float f=0;
//	cout << "massive before:"<<endl;
//	for (int i=0; i < y; i++) {
//		n[i] = rand() % 15;
//		a += n[i];
//		b += (n[i] * n[i]);
//		if (i < 6) {
//			c += n[i];
//		}
//		if (i >= k1-1 and i < k2) {
//			d += n[i];
//		}
//		cout << n[i]<<endl;
//	}
//	int s1; int s2;
//	cout << "Vvedite s1 i s2: "<<endl; cin >> s1 >> s2;
//	for (int i = s1-1; i < s2; i++) {
//		f += n[i];
//	}
//	f = f / (s2 - s1 + 1);
//	e = a / y;
//	cout << "i:" << a << endl;
//	cout << "ii:" << b<< endl;
//	cout << "iii:" << c << endl;
//	cout << "iv:" << d<< endl;
//	cout << "v:" << e << endl;
//	cout << "vi:" << f<< endl;
//	return 0;
//}


//nomer 3
//int main() {
//	float n[20];
//	 int a = 20;
//	int tmp = 0;
//	cout << "Massive before: " << endl;
//	for (int i = 0; i < 20; i++) {
//		n[i] = rand();
//		cout << n[i]<<endl;
//	}
//	cout << "Massive after:" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		tmp = n[i];
//		n[i] = n[a - 3 + i];
//		n[a - 3 + i] = tmp;
//	}
//	for (int i = 0; i < a; i++)
//		cout << n[i] << endl;
//	return 0;
//}


//nomer 4
//int main() {
//    int n[10];
//    for (int i = 0; i < 10; i++){
//        cout << "[" << i + 1 << "]" << ": ";
//        cin >> n[i];
//    }
//
//    int b = 10;
//    for (int i = 0; i < 10; i++) {
//        if (n[i] < 0) {
//            cout << n[i];
//            break;
//        }
//    }
//    return 0;
// }



//nomer 5
//int main()
//{
//    char str[] = "vladivostok";
//    if (strlen(str) % 2 == 0)
//        cout << strlen(str) << " chetnoe";
//    else
//        cout << strlen(str) << " nechetnoe";
//    return 0;
//}


//nomer 6
//int main()
//{
//    char str1[] = "soboleva";
//    char str2[] = "zolotarev";
//    if (strlen(str1) > strlen(str2))
//        cout << "true";
//    return 0;
//}


//nomer 7
// int main()
// {
//     int l1, l2, l3;
//     char str1[] = "london";
//     char str2[] = "paris";
//     char str3[] = "moscow";
//     l1 = strlen(str1);
//     l2 = strlen(str2);
//     l3 = strlen(str3);
//     if (l1 > l2)
//     {
//         if (l1 > l3) cout << "the longest " << str1 << endl;
//         else cout << "the longest " << str3 << endl;
//     }
//     else
//     {
//         if (l2 > l3)cout << "the longest " << str2 << endl;
//         else cout << "the longest " << str3 << endl;
//     };

//     if (l1 < l2)
//     {
//         if (l1 < l3) cout << "the shortest " << str1 << endl;
//         else cout << "the shortest " << str3 << endl;
//     }
//     else
//     {
//         if (l2 < l3)cout << "the shortest " << str2 << endl;
//         else cout << "the shortest " << str3 << endl;
//     };
//     return 0;
// }


//nomer 10
int main() {
	vector <string> vector1 = { "Can", "you", "can", "a", "can", "as", "a", "canner", "can", "can", "a", "can", "?" };
	string new_word;
	cout << "Введите новое слово: ";
	cin >> new_word;
	cout << endl;
	for (int i = 0; i < vector1.size(); ++i) {
		if (vector1[i] == "can" or vector1[i] == "Can") {
			vector1[i] = new_word;
		}
		cout << vector1[i] << " ";
	}
	cout << endl;
	return 0;
}
