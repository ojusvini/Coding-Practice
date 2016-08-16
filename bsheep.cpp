#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

struct pnt {
	int x, y, index;
	bool operator <(const pnt &other) const {
		if (y != other.y) return y < other.y;
		if (x != other.x) return x < other.x;
		return index < other.index;
	}
};

int cross(const pnt &o, const pnt &a, const pnt &b);

pnt Point[100010], hull[200010];

int main()
{
	int testcase, no;
	scanf("%d", &testcase);

	for (int cs = 1; cs <= testcase; cs++) {
		if (cs != 1) printf("\n");

		scanf("%d", &no);
		for (int i = 0; i < no; i++) {
			scanf("%d %d", &Point[i].x, &Point[i].y);
			Point[i].index = i+1;
		}

		sort(Point, Point+no);

		int k = 1;
		for (int i = 1; i < no; i++) {
			if (Point[i].x != Point[i-1].x || Point[i].y != Point[i-1].y) {
				if (k != i) Point[k] = Point[i];
				k++;
			}
		}
		no = k;

		k = 0;
		for (int i = 0; i < no; i++) {
			while (k >= 2 && cross(hull[k-2], hull[k-1], Point[i]) <= 0) k--;
			hull[k++] = Point[i];
		}

		for (int i = no-1, t = k+1; i >= 0; i--) {
			while (k >= t && cross(hull[k-2], hull[k-1], Point[i]) <= 0) k--;
			hull[k++] = Point[i];
		}

		k--;
		double len = 0;
		for (int i = 0; i < k; i++) {
			double dx = hull[i].x - hull[i+1].x;
			double dy = hull[i].y - hull[i+1].y;
			len += sqrt(dx*dx + dy*dy);
		}
		printf("%.2f\n", len);
		for (int i = 0; i < k; i++) {
			printf(i==0 ? "%d" : " %d", hull[i].index);
		}
		printf("\n");
	}
}

int cross(const pnt &o, const pnt &a, const pnt &b) {
	return (a.x - o.x) * (b.y - o.y) - (a.y - o.y) * (b.x - o.x);
}
