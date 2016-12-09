//
//  TableViewController.h
//  PulltoRefreshTableView1
//
//  Created by Student-002 on 18/10/16.
//  Copyright © 2016 Felix-its. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableViewController : UITableViewController<UISearchDisplayDelegate>
@property (nonatomic, retain)NSMutableArray *array;
@property (nonatomic, retain)NSMutableArray *searchResult;
@end
