import java.util.Scanner;

public class Intervals {

	static class Data {
		int first, last;

		public Data(int first, int last) {
			this.first = first;
			this.last = last;
		}
	}

	public static void merge(Data interval[]) {
		if (interval.length == 0)
			return;

		interval = sort(interval);

		MyStack<Data> st = new MyStack<>();
		st.push(interval[0]);

		for (Data dataInterval : interval) {
			Data top = st.peek();

			if (top.last < dataInterval.first) {
				st.push(dataInterval);
			}

			else if (top.last < dataInterval.last) {
				top.last = dataInterval.last;
				st.pop();
				st.push(top);
			}
		}

		System.out.print("After merging : {");
		while (!st.isEmpty()) {
			Data d = st.pop();
			System.out.print("{" + d.first + "," + d.last + "} ");
		}
		System.out.println("}");
	}

	public static Data[] sort(Data interval[]) {
		for (int i = 0; i < interval.length; i++) {
			for (int j = 0; j < interval.length - i - 1; j++) {
				if (interval[j].first > interval[j + 1].first) {
					Data temp = interval[j + 1];
					interval[j + 1] = interval[j];
					interval[j] = temp;
				}
			}
		}

		return interval;
	}

	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter total intervals : ");
		int n = sc.nextInt();
		Data interval[] = new Data[n];
		for (int i = 0; i < n; i++) {
			System.out.println("For interval " + (i + 1));
			System.out.print("\tEnter start : ");
			int s = sc.nextInt();
			System.out.print("\tEnter end : ");
			int e = sc.nextInt();

			interval[i] = new Data(s, e);
		}

		System.out.print("Give intervals : {");
		for (Data dataInterval : interval) {
			System.out.print("{" + dataInterval.first + "," + dataInterval.last + "} ");
		}
		System.out.println("}");

		merge(interval);
		sc.close();
	}
}