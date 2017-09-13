//
//  DetailViewController.h
//  RMath
//
//  Created by Robin on 13/09/2017.
//  Copyright © 2017 TendCloud. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

