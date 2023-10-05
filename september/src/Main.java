import sun.reflect.generics.tree.Tree;

/*public class Main {

    //定义二叉树
    public static class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        TreeNode() {}
        TreeNode(int val) { this.val = val; }
        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }

    public static void main(String[] args) {
        TreeNode first=new TreeNode(-1);
        TreeNode sec1=new TreeNode(-1,null,null);
        TreeNode sec2=new TreeNode(-1,null,null);
        first.left = sec1;
        first.right = sec2;
        preorder(first);
    }

    /*void traverse(TreeNode head) {
        if (head == null) {
            return;
        }
        traverse(head.next);
        // 后序位置
        print(head.val);
    }*/
    /*public static void preorder(TreeNode temp){
        if(temp!=null) System.out.println(temp.val);
         else return;

        preorder(temp.left);
        preorder(temp.right);
    }

}*/
