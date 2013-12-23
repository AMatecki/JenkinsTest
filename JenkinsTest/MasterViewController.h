//
//  MasterViewController.h
//  JenkinsTest
//
//  Created by Arkadiusz Matecki on 23.12.2013.
//  Copyright (c) 2013 Perform Group. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
