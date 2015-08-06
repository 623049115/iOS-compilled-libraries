//
//  DetailViewController.h
//  UsageSamples
//
//  Created by HK on 8/6/15.
//  Copyright (c) 2015 haikieu2907@icloud.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

