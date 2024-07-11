void func1(){
	int n;
	cout << "Please enter a number: ";
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= n; j++){
			cout << "*";
		}
		cout << endl;
	}
}
	
void func2(){
	int n;
	cout << "Please enter a number: ";
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			cout << "*";
		}
		cout << endl;
	}
}

void func3() {
	int n;
	cout << "Please enter a number: ";
	cin >> n;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < i; j++){
			cout << " ";
		}	
		for(int k = i; k < n; k++){
			cout << "*";
		}
		cout << endl;
	}
}

void func4() {
	int n; 
	cout << "Please enter a number: ";
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			cout << "*";
		}
		cout << endl;
	}
}
