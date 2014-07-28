//
//  ROFDetailViewController.h
//  controllingSource
//
//  Created by Renato Ferreira on 28/07/14.
//  Copyright (c) 2014 Renato Ferreira. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ROFDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
