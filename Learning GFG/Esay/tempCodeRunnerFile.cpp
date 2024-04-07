int count = 0;
        for(int i = 0; i < N-1; i++)
        {
            int min_value = INT_MAX, min_index = -1;
            for(int j = i+1; j < N; j++)
            {
                cout << "A[i] " << A[i] << endl;
                cout << "A[j] " << A[j] << endl;
                cout << "Current Min " << min_value << endl;
                min_value = min(min_value,A[j]);
                cout << "Min Value " << min_value << endl;
                cout << " ==== " << endl;
                if(min_value == A[j])
                {
                    min_index = j;
                }
            }

            if(min_index != -1)
            {
                if(A[i] > A[min_index])
                {
                    int temp = A[i];
                    A[i] = A[min_index];
                    A[min_index] = temp;
                    count++;
                }
            }
        }

        if(count > 2)
        {
            return false;
        }
        else{
            return true;
        }