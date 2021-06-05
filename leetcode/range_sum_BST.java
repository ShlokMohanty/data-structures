public class TreeNode 
{
	int value;
	TreeNode left;
	TreeNode right;
	TreeNode{}
	TreeNode(int value,TreeNode left,	TreeNode right)
	{
		this.value = value;
		this.left = left;
		this.right = right ;
		depth_for_search(root);
		return sum;
	}
	public void depth_for_search(TreeNode root)
	{
		if(root == null)
		{
			return ;
		}
		else if(high<root.value)
		{
			depth_for_search(root.left);
		}
		
		else if(low>root.value)
		{
			depth_for_search(root.right);
		}
		else
		{
			sum+=root.value;
			depth_for_search(root.right);
			depth_for_search(root.left);
		}
	}
}
