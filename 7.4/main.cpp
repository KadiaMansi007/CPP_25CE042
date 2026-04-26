#include "Shape.h"
#include <iostream>
#include <vector>

using namespace std;

const int MAX_SHAPES = 100;

// Function to display menu
void displayMenu() {
    cout << "\n========================================" << endl;
    cout << "     SHAPE AREA CALCULATION SYSTEM" << endl;
    cout << "========================================" << endl;
    cout << "1. Add Rectangle" << endl;
    cout << "2. Add Circle" << endl;
    cout << "3. Display All Shapes (Static Array)" << endl;
    cout << "4. Display All Shapes (Dynamic Vector)" << endl;
    cout << "5. Calculate Total Area (Static)" << endl;
    cout << "6. Calculate Total Area (Dynamic)" << endl;
    cout << "7. Compare Static vs Dynamic Storage" << endl;
    cout << "8. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    // ============================================
    // STATIC STORAGE: Fixed array of Shape pointers
    // ============================================
    Shape* staticShapes[MAX_SHAPES];
    int staticCount = 0;

    // ============================================
    // DYNAMIC STORAGE: Vector of Shape pointers
    // ============================================
    vector<Shape*> dynamicShapes;

    int choice;


    do {
        displayMenu();
        cin >> choice;

        switch(choice) {
            case 1: { // Add Rectangle
                cout << "\n--- ADD RECTANGLE ---" << endl;
                Rectangle* rect = new Rectangle();
                rect->inputDimensions();

                // Add to static storage
                if (staticCount < MAX_SHAPES) {
                    staticShapes[staticCount] = rect;
                    staticCount++;
                    cout << "Rectangle added to static storage!" << endl;
                } else {
                    cout << "Static storage full!" << endl;
                }

                // Add to dynamic storage (create a separate copy)
                Rectangle* rect2 = new Rectangle();
                rect2->inputDimensions();
                dynamicShapes.push_back(rect2);
                cout << "Rectangle added to dynamic storage!" << endl;
                break;
            }

            case 2: { // Add Circle
                cout << "\n--- ADD CIRCLE ---" << endl;
                Circle* circ = new Circle();
                circ->inputDimensions();

                // Add to static storage
                if (staticCount < MAX_SHAPES) {
                    staticShapes[staticCount] = circ;
                    staticCount++;
                    cout << "Circle added to static storage!" << endl;
                } else {
                    cout << "Static storage full!" << endl;
                }

                // Add to dynamic storage
                Circle* circ2 = new Circle();
                circ2->inputDimensions();
                dynamicShapes.push_back(circ2);
                cout << "Circle added to dynamic storage!" << endl;
                break;
            }

            case 3: { // Display All Shapes (Static)
                if (staticCount == 0) {
                    cout << "\nNo shapes in static storage!" << endl;
                } else {
                    cout << "\n=== SHAPES IN STATIC STORAGE ===" << endl;
                    cout << "Total shapes: " << staticCount << endl;
                    for (int i = 0; i < staticCount; i++) {
                        cout << "\n--- Shape " << i+1 << " ---" << endl;
                        staticShapes[i]->displayDetails();
                    }
                }
                break;
            }

            case 4: { // Display All Shapes (Dynamic)
                if (dynamicShapes.empty()) {
                    cout << "\nNo shapes in dynamic storage!" << endl;
                } else {
                    cout << "\n=== SHAPES IN DYNAMIC STORAGE ===" << endl;
                    cout << "Total shapes: " << dynamicShapes.size() << endl;
                    for (size_t i = 0; i < dynamicShapes.size(); i++) {
                        cout << "\n--- Shape " << i+1 << " ---" << endl;
                        dynamicShapes[i]->displayDetails();
                    }
                }
                break;
            }

            case 5: { // Calculate Total Area (Static)
                if (staticCount == 0) {
                    cout << "\nNo shapes in static storage!" << endl;
                } else {
                    double totalArea = 0;
                    for (int i = 0; i < staticCount; i++) {
                        totalArea += staticShapes[i]->Area();
                    }
                    cout << "\n=== STATIC STORAGE SUMMARY ===" << endl;
                    cout << "Number of shapes: " << staticCount << endl;
                    cout << "Total Area: " << fixed << setprecision(2) << totalArea << " sq units" << endl;
                }
                break;
            }

            case 6: { // Calculate Total Area (Dynamic)
                if (dynamicShapes.empty()) {
                    cout << "\nNo shapes in dynamic storage!" << endl;
                } else {
                    double totalArea = 0;
                    for (size_t i = 0; i < dynamicShapes.size(); i++) {
                        totalArea += dynamicShapes[i]->Area();
                    }
                    cout << "\n=== DYNAMIC STORAGE SUMMARY ===" << endl;
                    cout << "Number of shapes: " << dynamicShapes.size() << endl;
                    cout << "Total Area: " << fixed << setprecision(2) << totalArea << " sq units" << endl;
                }
                break;
            }

            case 7: { // Compare Static vs Dynamic Storage
                cout << "\n=== COMPARISON: STATIC vs DYNAMIC STORAGE ===" << endl;
                cout << "\nSTATIC STORAGE (Fixed Array):" << endl;
                cout << "  - Size fixed at compile time: " << MAX_SHAPES << endl;
                cout << "  - Memory allocated once" << endl;
                cout << "  - Cannot exceed maximum limit" << endl;
                cout << "  - Faster for known number of objects" << endl;
                cout << "  - Current shapes: " << staticCount << endl;

                cout << "\nDYNAMIC STORAGE (Vector):" << endl;
                cout << "  - Size can grow/shrink at runtime" << endl;
                cout << "  - Memory allocated dynamically" << endl;
                cout << "  - No fixed limit" << endl;
                cout << "  - More flexible for unknown number of objects" << endl;
                cout << "  - Current shapes: " << dynamicShapes.size() << endl;

                break;
            }

            case 8: { // Exit - Clean up memory
                cout << "\nExiting system. Cleaning up memory..." << endl;

                // Clean up static storage
                for (int i = 0; i < staticCount; i++) {
                    delete staticShapes[i];
                }

                // Clean up dynamic storage
                for (size_t i = 0; i < dynamicShapes.size(); i++) {
                    delete dynamicShapes[i];
                }

                cout << "Memory cleanup complete. Goodbye!" << endl;
                break;
            }

            default:
                cout << "\nInvalid choice! Please try again." << endl;
        }

    } while (choice != 8);

    return 0;
}
