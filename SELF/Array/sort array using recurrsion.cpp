// gives TLE on leet code

void insert(vector<int>&nums,int temp)
    {
        if(nums.size()==0 || nums[nums.size()-1]<=temp)
        {    
            nums.push_back(temp);
            return;
        }
        int val = nums[nums.size()-1];
        nums.pop_back();
        insert(nums,temp);
        nums.push_back(val);
        return;
    }

    vector<int> sortArray(vector<int>& nums) {
        if(nums.size()==1)
        return nums;

        int temp = nums[nums.size()-1];
        nums.pop_back();
        sortArray(nums);
        insert(nums,temp);

        return nums;
    }
