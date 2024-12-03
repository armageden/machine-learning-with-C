#ifndef NN_H_
#define NN_H_

//float d[]={0,0,0,
// 0,1,1,
// 1,0,1,
// 1,1,1
// };

//Mat di={.rows=4, .cols=2 ,.stride=3 .es=&d[0]};
//Mat do={.rows=4, .cols=1 ,.stride=3 .es=&d[3]};
typedef struct {
    size_t rows,cols;
    float *es;
}Mat;
Mat mat_alloc(size_t rows,size_t cols);
void mat_dot(Mat a, Mat b, Mat c);
void mat_sum();
#endif // NN_H_

#ifdef NN_IMPLIMENTATION

#endif // NN_IMPLIMENTATION