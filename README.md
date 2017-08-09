# QuickSort

&emsp;&emsp;面试中较为常见的算法之一就是快速排序，快速排序在实际排序应用中也是最好的选择，因为它的平均性能非常好，它的期望复杂度为nlgn，另外，它还是一种稳定的排序方法。快速排序利用分治思想，将待排序数组分成左右两个部分，然后对其分别递归调用快速排序算法。

&emsp;&emsp;下面通过一个例子介绍快速排序算法的思想，假设要对数组a[10]={6，1，2，7，9，3，4，5，10，8}进行排序，首先要在数组中选择一个数作为基准值，这个数可以随意选择，在这里，我们选择数组的第一个元素a[0]=6作为基准值，接下来，我们需要把数组中小于6的数放在左边，大于6的数放在右边，怎么实现呢？

&emsp;&emsp;我们设置两个“哨兵”，记为“哨兵i”和“哨兵j”，他们分别指向数组的第一个元素和最后一个元素，即i=0，j=9。首先哨兵j开始出动，哨兵j一步一步地向左挪动（即j--），直到找到一个小于6的数停下来。接下来哨兵i再一步一步向右挪动（即i++），直到找到一个数大于6的数停下来。

![这里写图片描述](http://img.blog.csdn.net/20170801211223941?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvc2luYXRfMjAxNzczMjc=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)

最后哨兵j停在了数字5面前，哨兵i停在了数字7面前。此时就需要交换i和j指向的元素的值。

![这里写图片描述](http://img.blog.csdn.net/20170801211402437?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvc2luYXRfMjAxNzczMjc=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)

交换之后的数组变为a[10]={6，1，2，5，9，3，4，7，10，8}：

![这里写图片描述](http://img.blog.csdn.net/20170801211440860?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvc2luYXRfMjAxNzczMjc=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)

第一次交换至此结束。接下来，由于哨兵i和哨兵j还没有相遇，于是哨兵j继续向前，发现比6小的4之后停下；哨兵i继续向前，发现比6大的9之后停下，两者再进行交换。交换之后的数组变为a[10]={6，1，2，5，4，3，9，7，10，8}。

![这里写图片描述](http://img.blog.csdn.net/20170801212317131?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvc2luYXRfMjAxNzczMjc=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)

第二次交换至此结束。接下来，哨兵j继续向前，发小比6小的3停下来；哨兵i继续向前，发现i==j了！！！于是，这一轮的探测就要结束了，此时交换a[i]与基准的值，数组a就以6为分界线，分成了小于6和大于6的左右两部分：a[10]={3，1，2，5，4，6，9，7，10，8}。

![这里写图片描述](http://img.blog.csdn.net/20170801212706478?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvc2luYXRfMjAxNzczMjc=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)

至此，第一轮快速排序完全结束，接下来，对于6左边的半部分3，1，2，5，4，执行以上过程；对于6右边的半部分9，7，10，8，执行以上过程，直到不可拆分出新的子序列为止。最终将会得到这样的序列：1  2  3  4  5  6  7  8  9  10，到此，排序完全结束。
