import java.util.Arrays;

public class FastCartesianProduct {
    
    public static int[] getTupleByIndex(int[][] setarr, int index) {
        int currentElement, currentSetLength, totalSets = setarr.length;
        int[] resultTuple = new int[totalSets];
        for (int i = totalSets - 1; i >= 0; i--) {
            currentSetLength = setarr[i].length;
            currentElement = setarr[i][index % currentSetLength];
            resultTuple[i] = currentElement;
            index = index / currentSetLength;
        }
        return resultTuple;
    }

    public static void main(String[] args) {
        int[] firstSet = new int[] {1, 2, 3};
        int[] secondSet = new int[] {2, 7, 4, 9};
        int[] thirdSet = new int[] {1, 7};
        int[][] setarr = new int[][] {firstSet, secondSet, thirdSet};
        System.out.println(Arrays.toString(getTupleByIndex(setarr, 6)));
    }
}
