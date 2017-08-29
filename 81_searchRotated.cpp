bool search(vector<int>& nums, int target)
{
	int n = nums.size();
	if(n==0) return false;
	int start = 0;
	int end = n-1;
	while(start <= end)
	{
		int mid = (start + end)/2;
		if(nums[mid] == target) return true;
		if(nums[mid] > nums[start])
		{
			if(target>=nums[start] && target<nums[mid])
				end = mid-1;
			else
				start = mid+1;
		}
		else if(nums[mid] < nums[start])
		{
			if(target>nums[mid] && target<=nums[end])
				start = mid+1;
			else
				end = mid-1;
		}
		else
			start++;
	}
	return false;
}