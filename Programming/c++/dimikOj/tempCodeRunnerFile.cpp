    int t;
    cin >> t;

    while (t--) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        int cnt = 0;
        int num;

        while (ss >> num) {
            cnt++;
        }

        cout << cnt << endl;
    }

    return 0;