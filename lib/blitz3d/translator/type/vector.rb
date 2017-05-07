module Blitz3D
  module AST
    class VectorType < Type
      attr_accessor :element_type, :label, :sizes

      def initialize(json)
        @element_type = Type.load(json['elementType'])
        @label = json['label']
        @sizes = json['sizes']
      end

      def to_c
        'void*'
      end

      def default_value
        0
      end
    end
  end
end
