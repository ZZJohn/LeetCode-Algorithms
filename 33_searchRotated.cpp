int search(vector<int> &nums, int target)
{
	int n = nums.size();
	int l=0, r=n-1;
	while(l<=r)
	{
		int m = (l+r)/2;
		if(nums[m] == target) return m;
		if(nums[m] >= nums[l])
		{
			if(nums[l] <= target && target <= nums[m]) r=m-1;
			else l=m+1;
		}
		else
		{
			if(target >= nums[l] || target <=nums[m]) r=m-1;
			else l = m+1;
		}
	}
	return -1;
}