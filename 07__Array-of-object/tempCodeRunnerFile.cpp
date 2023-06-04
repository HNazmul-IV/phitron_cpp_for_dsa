    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;

        frq[c - 'a'].c = c;
        frq[c - 'a'].cnt++;
    }