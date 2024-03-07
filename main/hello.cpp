from graphviz import Digraph

def generate_activity_diagram():
    # Create Digraph object
    dot = Digraph()

    # Add nodes
    dot.node('Start', 'Start')
    dot.node('Enter Text', 'Enter Text')
    dot.node('Parse Text', 'Parse Text')
    dot.node('Generate 3D Model', 'Generate 3D Model')
    dot.node('Map Textures', 'Map Textures')
    dot.node('Render 3D Image', 'Render 3D Image')
    dot.node('Display Image', 'Display Image')
    dot.node('End', 'End')

    # Add edges
    dot.edges([
        ('Start', 'Enter Text'),
        ('Enter Text', 'Parse Text'),
        ('Parse Text', 'Generate 3D Model'),
        ('Generate 3D Model', 'Map Textures'),
        ('Map Textures', 'Render 3D Image'),
        ('Render 3D Image', 'Display Image'),
        ('Display Image', 'End')
    ])

    # Set node styles
    dot.node('Start', shape='ellipse')
    dot.node('End', shape='ellipse')

    # Render diagram
    dot.render('text_to_3d_converter_activity_diagram', format='png', cleanup=True)

if __name__ == "__main__":
    generate_activity_diagram()
