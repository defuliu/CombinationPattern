//
//  FileCell.h
//  CombinationPattern
//
//  Created by 刘德福 on 2018/5/21.
//  Copyright © 2018年 ZGW. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FileCell : UITableViewCell

@property (nonatomic, weak) id                data;
@property (nonatomic, weak) NSIndexPath      *indexPath;
@property (nonatomic, weak) UITableView      *tableView;
@property (nonatomic, weak) UIViewController *controller;

- (void)loadContent;

@end
