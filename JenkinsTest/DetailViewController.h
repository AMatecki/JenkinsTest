//
//  DetailViewController.h
//  JenkinsTest
//
//  Created by Arkadiusz Matecki on 23.12.2013.
//  Copyright (c) 2013 Perform Group. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
