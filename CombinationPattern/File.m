//
//  File.m
//  CombinationPattern
//
//  Created by 刘德福 on 2018/5/21.
//  Copyright © 2018年 ZGW. All rights reserved.
//

#import "File.h"

@implementation File

- (instancetype)init
{
    self = [super init];
    if (self) {
        self.childFiles = [NSMutableArray array];
    }
    return self;
}

- (void)addFile:(File *)file
{
    [self.childFiles addObject:file];
}


+ (instancetype)fileWithFileType:(EFile)fileType fileName:(NSString *)name
{
    File *file = [[[self class] alloc] init];
    file.fileType = fileType;
    file.name = name;
    
    return file;
}

@end
