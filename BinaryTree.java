class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

public class BinaryTree {
    private int maxSum = Integer.MIN_VALUE;

    private int maxPathSumHelper(TreeNode root) {
        if (root == null) {
            return 0;
        }

        int left = Math.max(maxPathSumHelper(root.left), 0);
        int right = Math.max(maxPathSumHelper(root.right), 0);

        int maxSinglePath = Math.max(left + root.val, root.val);

        int maxTopPath = Math.max(maxSinglePath, left + right + root.val);


        maxSum = Math.max(maxSum, maxTopPath);

        return maxSinglePath;
    }


    public int maxPathSum(TreeNode root) {
        maxPathSumHelper(root);
        return maxSum;
    }

    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();
        TreeNode root = new TreeNode(1);
        root.left = new TreeNode(2);
        root.right = new TreeNode(3);
        root.left.left = new TreeNode(4);
        root.left.right = new TreeNode(5);

        int result = tree.maxPathSum(root);
        System.out.println("Maximum path sum: " + result);
    }
}
