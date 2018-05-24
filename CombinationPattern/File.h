//
//  File.h
//  CombinationPattern
//
//  Created by 刘德福 on 2018/5/21.
//  Copyright © 2018年 ZGW. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger
{
    kFile,//文件
    kFolder,//文件夹
}EFile;

@interface File : NSObject

//文件名或文件夹，根据枚举来区分
@property (nonatomic, copy)NSString *name;

@property (nonatomic, assign)EFile fileType;

@property (nonatomic, strong) NSMutableArray<File *> *childFiles;

// 添加文件到集合
- (void)addFile:(File *)file;

//初始化的方法
+ (instancetype)fileWithFileType:(EFile)fileType fileName:(NSString *)name;



@end
